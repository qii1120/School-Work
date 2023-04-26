// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmul_pip.h"
#include "Vmul_pip__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmul_pip::Vmul_pip(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmul_pip__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , req_i{vlSymsp->TOP.req_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , a_i{vlSymsp->TOP.a_i}
    , b_i{vlSymsp->TOP.b_i}
    , result_o{vlSymsp->TOP.result_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmul_pip::Vmul_pip(const char* _vcname__)
    : Vmul_pip(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmul_pip::~Vmul_pip() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmul_pip___024root___eval_debug_assertions(Vmul_pip___024root* vlSelf);
#endif  // VL_DEBUG
void Vmul_pip___024root___eval_static(Vmul_pip___024root* vlSelf);
void Vmul_pip___024root___eval_initial(Vmul_pip___024root* vlSelf);
void Vmul_pip___024root___eval_settle(Vmul_pip___024root* vlSelf);
void Vmul_pip___024root___eval(Vmul_pip___024root* vlSelf);

void Vmul_pip::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmul_pip::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmul_pip___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmul_pip___024root___eval_static(&(vlSymsp->TOP));
        Vmul_pip___024root___eval_initial(&(vlSymsp->TOP));
        Vmul_pip___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmul_pip___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmul_pip::eventsPending() { return false; }

uint64_t Vmul_pip::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmul_pip::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmul_pip___024root___eval_final(Vmul_pip___024root* vlSelf);

VL_ATTR_COLD void Vmul_pip::final() {
    Vmul_pip___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmul_pip::hierName() const { return vlSymsp->name(); }
const char* Vmul_pip::modelName() const { return "Vmul_pip"; }
unsigned Vmul_pip::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmul_pip::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmul_pip___024root__trace_init_top(Vmul_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmul_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul_pip___024root*>(voidSelf);
    Vmul_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmul_pip___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmul_pip___024root__trace_register(Vmul_pip___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmul_pip::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmul_pip::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmul_pip___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
