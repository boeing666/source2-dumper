#pragma once

class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (pulse_system)
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    bool m_bIsRunningUnitTests; // offset 0xA8, size 0x1, align 1
    bool m_bExplicitTimeStepping; // offset 0xA9, size 0x1, align 1
    bool m_bExpectingToDestroyWithYieldedCursors; // offset 0xAA, size 0x1, align 1
    bool m_bQuietTracepoints; // offset 0xAB, size 0x1, align 1
    bool m_bExpectingCursorTerminatedDueToMaxInstructions; // offset 0xAC, size 0x1, align 1
    char _pad_00AD[0x3]; // offset 0xAD
    int32 m_nCursorsTerminatedDueToMaxInstructions; // offset 0xB0, size 0x4, align 4
    int32 m_nNextValidateIndex; // offset 0xB4, size 0x4, align 4
    CUtlVector< CUtlString > m_Tracepoints; // offset 0xB8, size 0x18, align 8
    bool m_bTestYesOrNoPath; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x7]; // offset 0xD1
};
