#pragma once

class CPulseGraphExecutionHistory  // sizeof 0xA8, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseGraphInstanceID_t m_nInstanceID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strFileName; // offset 0x8, size 0x8, align 8
    CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc; // offset 0x10, size 0x28, align 8
    CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc; // offset 0x38, size 0x28, align 8
    CUtlOrderedMap< PulseDocNodeID_t, CUtlVector< int32 > > m_mapNodeToNewCursorCount; // offset 0x60, size 0x28, align 8
    char _pad_0088[0x18]; // offset 0x88
    int32 m_nCulledCursorCount; // offset 0xA0, size 0x4, align 4
    char _pad_00A4[0x4]; // offset 0xA4
};
