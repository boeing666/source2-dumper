#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC58]; // offset 0x0
    bool m_bFadeOut; // offset 0xC58, size 0x1, align 1
    bool m_bImportant; // offset 0xC59, size 0x1, align 1
    char _pad_0C5A[0x2]; // offset 0xC5A
    GameTime_t m_flEffectTime; // offset 0xC5C, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xC60, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xC64, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xC68, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xC6C, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xC70, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xC74, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xC75, size 0x1, align 255
    bool m_bFadingOut; // offset 0xC76, size 0x1, align 1
    char _pad_0C77[0x1]; // offset 0xC77
    float32[10] m_flScaleEnd; // offset 0xC78, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xCA0, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xCC8, size 0x28, align 4
};
