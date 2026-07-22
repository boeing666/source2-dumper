#pragma once

class CPulseCell_Outflow_PlaySceneBase : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CPulse_ResumePoint m_OnFinished; // offset 0x48, size 0x48, align 255
    CPulse_ResumePoint m_OnCanceled; // offset 0x90, size 0x48, align 255
    CUtlVector< CPulse_OutflowConnection > m_Triggers; // offset 0xD8, size 0x18, align 8
};
