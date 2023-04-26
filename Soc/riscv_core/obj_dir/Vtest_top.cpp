// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_top.h"
#include "Vtest_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtest_top::Vtest_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , halt_o{vlSymsp->TOP.halt_o}
    , test_top{vlSymsp->TOP.test_top}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtest_top::Vtest_top(const char* _vcname__)
    : Vtest_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest_top::~Vtest_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest_top___024root___eval_debug_assertions(Vtest_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_top___024root___eval_static(Vtest_top___024root* vlSelf);
void Vtest_top___024root___eval_initial(Vtest_top___024root* vlSelf);
void Vtest_top___024root___eval_settle(Vtest_top___024root* vlSelf);
void Vtest_top___024root___eval(Vtest_top___024root* vlSelf);

void Vtest_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest_top___024root___eval_static(&(vlSymsp->TOP));
        Vtest_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtest_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest_top::eventsPending() { return false; }

uint64_t Vtest_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtest_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest_top___024root___eval_final(Vtest_top___024root* vlSelf);

VL_ATTR_COLD void Vtest_top::final() {
    Vtest_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest_top::hierName() const { return vlSymsp->name(); }
const char* Vtest_top::modelName() const { return "Vtest_top"; }
unsigned Vtest_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtest_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtest_top___024root__trace_init_top(Vtest_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtest_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtest_top___024root__trace_register(Vtest_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtest_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
