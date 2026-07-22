#pragma once

class CPulseGraphExecutionHistory  // sizeof 0x78, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseGraphInstanceID_t m_nInstanceID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strFileName; // offset 0x8, size 0x8, align 8
    CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory; // offset 0x10, size 0x18, align 8
    CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc; // offset 0x28, size 0x28, align 8
    CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc; // offset 0x50, size 0x28, align 8
};
