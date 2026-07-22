#pragma once

struct CPulseCell_Outflow_PlayVCD::VCDRequirementInfo_t  // sizeof 0x50, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CUtlString m_szRequirementName; // offset 0x0, size 0x8, align 8
    CPulse_OutflowConnection m_Outflow; // offset 0x8, size 0x48, align 255
};
