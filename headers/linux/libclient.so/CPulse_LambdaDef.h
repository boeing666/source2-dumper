#pragma once

class CPulse_LambdaDef  // sizeof 0xC0, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CPulse_OutflowConnection m_EvaluateConnection; // offset 0x0, size 0x48, align 255
    CPulseType m_ResultType; // offset 0x48, size 0x18, align 8
    PulseDocNodeID_t m_nEditorNodeID; // offset 0x60, size 0x4, align 255
    char _pad_0064[0x4]; // offset 0x64
    PulseSymbol_t m_PortName; // offset 0x68, size 0x10, align 8
    CUtlVector< PulseRuntimeVarIndex_t > m_DependentObservableVars; // offset 0x78, size 0x18, align 8
    CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > m_DependentObservableBlackboardReferences; // offset 0x90, size 0x18, align 8
    CUtlVector< PulseDocNodeID_t > m_DependentObservableTempVars; // offset 0xA8, size 0x18, align 8
};
