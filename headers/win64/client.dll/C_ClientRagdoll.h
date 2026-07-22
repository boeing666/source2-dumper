#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0x1218, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    bool m_bFadeOut; // offset 0x1180, size 0x1, align 1
    bool m_bImportant; // offset 0x1181, size 0x1, align 1
    char _pad_1182[0x2]; // offset 0x1182
    GameTime_t m_flEffectTime; // offset 0x1184, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0x1188, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0x118C, size 0x4, align 4
    int32 m_iMinFriction; // offset 0x1190, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0x1194, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0x1198, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0x119C, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0x119D, size 0x1, align 255
    bool m_bFadingOut; // offset 0x119E, size 0x1, align 1
    char _pad_119F[0x1]; // offset 0x119F
    float32[10] m_flScaleEnd; // offset 0x11A0, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0x11C8, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0x11F0, size 0x28, align 4
};
