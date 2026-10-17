#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xF68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xED0]; // offset 0x0
    bool m_bFadeOut; // offset 0xED0, size 0x1, align 1
    bool m_bImportant; // offset 0xED1, size 0x1, align 1
    char _pad_0ED2[0x2]; // offset 0xED2
    GameTime_t m_flEffectTime; // offset 0xED4, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xED8, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xEDC, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xEE0, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xEE4, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xEE8, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xEEC, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xEED, size 0x1, align 255
    bool m_bFadingOut; // offset 0xEEE, size 0x1, align 1
    char _pad_0EEF[0x1]; // offset 0xEEF
    float32[10] m_flScaleEnd; // offset 0xEF0, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xF18, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xF40, size 0x28, align 4
};
