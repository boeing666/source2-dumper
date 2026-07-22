#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0xD40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    bool m_bFadeOut; // offset 0xCA8, size 0x1, align 1
    bool m_bImportant; // offset 0xCA9, size 0x1, align 1
    char _pad_0CAA[0x2]; // offset 0xCAA
    GameTime_t m_flEffectTime; // offset 0xCAC, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0xCB0, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0xCB4, size 0x4, align 4
    int32 m_iMinFriction; // offset 0xCB8, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0xCBC, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0xCC0, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0xCC4, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0xCC5, size 0x1, align 255
    bool m_bFadingOut; // offset 0xCC6, size 0x1, align 1
    char _pad_0CC7[0x1]; // offset 0xCC7
    float32[10] m_flScaleEnd; // offset 0xCC8, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0xCF0, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0xD18, size 0x28, align 4
};
