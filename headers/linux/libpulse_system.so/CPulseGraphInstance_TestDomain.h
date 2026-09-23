#pragma once

class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance /*0x0*/  // sizeof 0xD0, align 0xFF [vtable] (pulse_system)
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    bool m_bIsRunningUnitTests; // offset 0xA0, size 0x1, align 1
    bool m_bExplicitTimeStepping; // offset 0xA1, size 0x1, align 1
    bool m_bExpectingToDestroyWithYieldedCursors; // offset 0xA2, size 0x1, align 1
    bool m_bQuietTracepoints; // offset 0xA3, size 0x1, align 1
    bool m_bExpectingCursorTerminatedDueToMaxInstructions; // offset 0xA4, size 0x1, align 1
    char _pad_00A5[0x3]; // offset 0xA5
    int32 m_nCursorsTerminatedDueToMaxInstructions; // offset 0xA8, size 0x4, align 4
    int32 m_nNextValidateIndex; // offset 0xAC, size 0x4, align 4
    CUtlVector< CUtlString > m_Tracepoints; // offset 0xB0, size 0x18, align 8
    bool m_bTestYesOrNoPath; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x7]; // offset 0xC9
};
