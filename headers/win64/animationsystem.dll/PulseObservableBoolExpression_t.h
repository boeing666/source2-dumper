#pragma once

struct PulseObservableBoolExpression_t  // sizeof 0x78, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CPulse_OutflowConnection m_EvaluateConnection; // offset 0x0, size 0x48, align 255
    CUtlVector< PulseRuntimeVarIndex_t > m_DependentObservableVars; // offset 0x48, size 0x18, align 8
    CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > m_DependentObservableBlackboardReferences; // offset 0x60, size 0x18, align 8
};
