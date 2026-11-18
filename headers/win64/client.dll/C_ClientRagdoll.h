#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xE48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    bool m_bFadeOut; // offset 0xDA8, size 0x1, align 1
    bool m_bImportant; // offset 0xDA9, size 0x1, align 1
    char _pad_0DAA[0x2]; // offset 0xDAA
    GameTime_t m_flEffectTime; // offset 0xDAC, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xDB0, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xDB4, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xDB8, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xDBC, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xDC0, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xDC4, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xDC5, size 0x1, align 255
    bool m_bFadingOut; // offset 0xDC6, size 0x1, align 1
    char _pad_0DC7[0x1]; // offset 0xDC7
    float32[10] m_flScaleEnd; // offset 0xDC8, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xDF0, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xE18, size 0x28, align 4
    char _pad_0E40[0x8]; // offset 0xE40
};
