#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xE38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    bool m_bFadeOut; // offset 0xDA0, size 0x1, align 1
    bool m_bImportant; // offset 0xDA1, size 0x1, align 1
    char _pad_0DA2[0x2]; // offset 0xDA2
    GameTime_t m_flEffectTime; // offset 0xDA4, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xDA8, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xDAC, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xDB0, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xDB4, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xDB8, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xDBC, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xDBD, size 0x1, align 255
    bool m_bFadingOut; // offset 0xDBE, size 0x1, align 1
    char _pad_0DBF[0x1]; // offset 0xDBF
    float32[10] m_flScaleEnd; // offset 0xDC0, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xDE8, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xE10, size 0x28, align 4
};
