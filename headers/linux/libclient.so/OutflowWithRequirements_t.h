#pragma once

struct OutflowWithRequirements_t  // sizeof 0x80, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CPulse_OutflowConnection m_Connection; // offset 0x0, size 0x48, align 255
    PulseDocNodeID_t m_DestinationFlowNodeID; // offset 0x48, size 0x4, align 255
    char _pad_004C[0x4]; // offset 0x4C
    CUtlVector< PulseDocNodeID_t > m_RequirementNodeIDs; // offset 0x50, size 0x18, align 8
    CUtlVector< int32 > m_nCursorStateBlockIndex; // offset 0x68, size 0x18, align 8
};
