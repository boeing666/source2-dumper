#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xE78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDE0]; // offset 0x0
    bool m_bFadeOut; // offset 0xDE0, size 0x1, align 1
    bool m_bImportant; // offset 0xDE1, size 0x1, align 1
    char _pad_0DE2[0x2]; // offset 0xDE2
    GameTime_t m_flEffectTime; // offset 0xDE4, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xDE8, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xDEC, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xDF0, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xDF4, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xDF8, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xDFC, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xDFD, size 0x1, align 255
    bool m_bFadingOut; // offset 0xDFE, size 0x1, align 1
    char _pad_0DFF[0x1]; // offset 0xDFF
    float32[10] m_flScaleEnd; // offset 0xE00, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xE28, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xE50, size 0x28, align 4
};
