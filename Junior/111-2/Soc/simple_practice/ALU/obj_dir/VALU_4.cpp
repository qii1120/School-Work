// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU_4.h"
#include "VALU_4__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALU_4::VALU_4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALU_4__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c_in{vlSymsp->TOP.c_in}
    , sel{vlSymsp->TOP.sel}
    , result{vlSymsp->TOP.result}
    , c_out{vlSymsp->TOP.c_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VALU_4::VALU_4(const char* _vcname__)
    : VALU_4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALU_4::~VALU_4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VALU_4___024root___eval_debug_assertions(VALU_4___024root* vlSelf);
#endif  // VL_DEBUG
void VALU_4___024root___eval_static(VALU_4___024root* vlSelf);
void VALU_4___024root___eval_initial(VALU_4___024root* vlSelf);
void VALU_4___024root___eval_settle(VALU_4___024root* vlSelf);
void VALU_4___024root___eval(VALU_4___024root* vlSelf);

void VALU_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU_4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU_4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VALU_4___024root___eval_static(&(vlSymsp->TOP));
        VALU_4___024root___eval_initial(&(vlSymsp->TOP));
        VALU_4___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VALU_4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VALU_4::eventsPending() { return false; }

uint64_t VALU_4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VALU_4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VALU_4___024root___eval_final(VALU_4___024root* vlSelf);

VL_ATTR_COLD void VALU_4::final() {
    VALU_4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALU_4::hierName() const { return vlSymsp->name(); }
const char* VALU_4::modelName() const { return "VALU_4"; }
unsigned VALU_4::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VALU_4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VALU_4___024root__trace_init_top(VALU_4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_4___024root*>(voidSelf);
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VALU_4___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VALU_4___024root__trace_register(VALU_4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU_4::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VALU_4::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VALU_4___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
