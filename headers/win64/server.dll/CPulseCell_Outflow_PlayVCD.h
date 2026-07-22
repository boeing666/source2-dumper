#pragma once

class CPulseCell_Outflow_PlayVCD : public CPulseCell_Outflow_PlayVCDBase /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCChoreoSceneResource > m_hChoreoScene; // offset 0x138, size 0x8, align 8
    CPulse_OutflowConnection m_OnPaused; // offset 0x140, size 0x48, align 255
    CPulse_OutflowConnection m_OnResumed; // offset 0x188, size 0x48, align 255
    CUtlVector< CPulseCell_Outflow_PlayVCD::VCDRequirementInfo_t > m_OutRequirements; // offset 0x1D0, size 0x18, align 8
};
