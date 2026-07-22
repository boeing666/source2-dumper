#pragma once

struct CPulseCell_Outflow_PlayVCD::VCDRequirementInfo_t  // sizeof 0x50, align 0x8 (server) {MGetKV3ClassDefaults}
{
    int32 m_nEventID; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CPulse_OutflowConnection m_Outflow; // offset 0x8, size 0x48, align 255
};
