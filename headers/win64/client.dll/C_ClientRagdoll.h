#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xE90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    bool m_bFadeOut; // offset 0xDF8, size 0x1, align 1
    bool m_bImportant; // offset 0xDF9, size 0x1, align 1
    char _pad_0DFA[0x2]; // offset 0xDFA
    GameTime_t m_flEffectTime; // offset 0xDFC, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xE00, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xE04, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xE08, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xE0C, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xE10, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xE14, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xE15, size 0x1, align 255
    bool m_bFadingOut; // offset 0xE16, size 0x1, align 1
    char _pad_0E17[0x1]; // offset 0xE17
    float32[10] m_flScaleEnd; // offset 0xE18, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xE40, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xE68, size 0x28, align 4
};
