#pragma once

class C_ClientRagdoll : public CBaseAnimGraph /*0x0*/  // sizeof 0x1300, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1268]; // offset 0x0
    bool m_bFadeOut; // offset 0x1268, size 0x1, align 1
    bool m_bImportant; // offset 0x1269, size 0x1, align 1
    char _pad_126A[0x2]; // offset 0x126A
    GameTime_t m_flEffectTime; // offset 0x126C, size 0x4, align 255
    GameTime_t m_gibDespawnTime; // offset 0x1270, size 0x4, align 255
    int32 m_iCurrentFriction; // offset 0x1274, size 0x4, align 4
    int32 m_iMinFriction; // offset 0x1278, size 0x4, align 4
    int32 m_iMaxFriction; // offset 0x127C, size 0x4, align 4
    int32 m_iFrictionAnimState; // offset 0x1280, size 0x4, align 4
    bool m_bReleaseRagdoll; // offset 0x1284, size 0x1, align 1
    AttachmentHandle_t m_iEyeAttachment; // offset 0x1285, size 0x1, align 255
    bool m_bFadingOut; // offset 0x1286, size 0x1, align 1
    char _pad_1287[0x1]; // offset 0x1287
    float32[10] m_flScaleEnd; // offset 0x1288, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeStart; // offset 0x12B0, size 0x28, align 4
    GameTime_t[10] m_flScaleTimeEnd; // offset 0x12D8, size 0x28, align 4
};
