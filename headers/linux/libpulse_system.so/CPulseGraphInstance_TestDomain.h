#pragma once

class CPulseGraphInstance_TestDomain : public CBasePulseGraphInstance /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (pulse_system)
{
public:
    char _pad_0000[0x128]; // offset 0x0
    bool m_bIsRunningUnitTests; // offset 0x128, size 0x1, align 1
    bool m_bExplicitTimeStepping; // offset 0x129, size 0x1, align 1
    bool m_bExpectingToDestroyWithYieldedCursors; // offset 0x12A, size 0x1, align 1
    bool m_bQuietTracepoints; // offset 0x12B, size 0x1, align 1
    bool m_bExpectingCursorTerminatedDueToMaxInstructions; // offset 0x12C, size 0x1, align 1
    char _pad_012D[0x3]; // offset 0x12D
    int32 m_nCursorsTerminatedDueToMaxInstructions; // offset 0x130, size 0x4, align 4
    int32 m_nNextValidateIndex; // offset 0x134, size 0x4, align 4
    CUtlVector< CUtlString > m_Tracepoints; // offset 0x138, size 0x18, align 8
    bool m_bTestYesOrNoPath; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x7]; // offset 0x151
};
