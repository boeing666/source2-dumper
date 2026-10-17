#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD48]; // offset 0x0
    bool m_bFadeOut; // offset 0xD48, size 0x1, align 1
    bool m_bImportant; // offset 0xD49, size 0x1, align 1
    char _pad_0D4A[0x2]; // offset 0xD4A
    GameTime_t m_flEffectTime; // offset 0xD4C, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xD50, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xD54, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xD58, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xD5C, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xD60, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xD64, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xD65, size 0x1, align 255
    bool m_bFadingOut; // offset 0xD66, size 0x1, align 1
    char _pad_0D67[0x1]; // offset 0xD67
    float32[10] m_flScaleEnd; // offset 0xD68, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xD90, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xDB8, size 0x28, align 4
};
