#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0x11A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    bool m_bFadeOut; // offset 0x1108, size 0x1, align 1
    bool m_bImportant; // offset 0x1109, size 0x1, align 1
    char _pad_110A[0x2]; // offset 0x110A
    GameTime_t m_flEffectTime; // offset 0x110C, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0x1110, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0x1114, size 0x4, align 4
    int32 m_iMinFriction; // offset 0x1118, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0x111C, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0x1120, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0x1124, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0x1125, size 0x1, align 255
    bool m_bFadingOut; // offset 0x1126, size 0x1, align 1
    char _pad_1127[0x1]; // offset 0x1127
    float32[10] m_flScaleEnd; // offset 0x1128, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0x1150, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0x1178, size 0x28, align 4
};
