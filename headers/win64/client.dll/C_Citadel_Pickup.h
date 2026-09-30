#pragma once

class C_Citadel_Pickup : public CBaseAnimGraph /*0x0*/  // sizeof 0xED8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    CHandle< C_BaseEntity > m_hAssignedClaimer; // offset 0xDA0, size 0x4, align 4
    bool m_bActive; // offset 0xDA4, size 0x1, align 1
    bool m_bInteractive; // offset 0xDA5, size 0x1, align 1
    char _pad_0DA6[0x2]; // offset 0xDA6
    VectorWS m_vVacuumStartPos; // offset 0xDA8, size 0xC, align 4
    Vector m_vInitialVacuumVel; // offset 0xDB4, size 0xC, align 4
    CHandle< C_BaseEntity > m_hVacuumTarget; // offset 0xDC0, size 0x4, align 4
    char _pad_0DC4[0xFC]; // offset 0xDC4
    GameTime_t m_flVacuumStartTime; // offset 0xEC0, size 0x4, align 255
    VectorWS m_vVacuumPos; // offset 0xEC4, size 0xC, align 4
    float32 m_flLastFrameTime; // offset 0xED0, size 0x4, align 4
    bool m_bVacuumFinished; // offset 0xED4, size 0x1, align 1
    char _pad_0ED5[0x3]; // offset 0xED5
};
