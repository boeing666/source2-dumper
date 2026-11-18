#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xFD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    bool m_bFadeOut; // offset 0xF38, size 0x1, align 1
    bool m_bImportant; // offset 0xF39, size 0x1, align 1
    char _pad_0F3A[0x2]; // offset 0xF3A
    GameTime_t m_flEffectTime; // offset 0xF3C, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xF40, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xF44, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xF48, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xF4C, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xF50, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xF54, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xF55, size 0x1, align 255
    bool m_bFadingOut; // offset 0xF56, size 0x1, align 1
    char _pad_0F57[0x1]; // offset 0xF57
    float32[10] m_flScaleEnd; // offset 0xF58, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xF80, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xFA8, size 0x28, align 4
    char _pad_0FD0[0x8]; // offset 0xFD0
};
