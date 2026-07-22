#pragma once

class CPulseCell_Outflow_PlaySceneBase : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x138, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulse_ResumePoint m_OnFinished; // offset 0xD8, size 0x48, align 255
    CUtlVector< CPulse_OutflowConnection > m_Triggers; // offset 0x120, size 0x18, align 8
};
