#pragma once

class C_Citadel_Pickup : public CBaseAnimGraph /*0x0*/  // sizeof 0xF30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hAssignedClaimer; // offset 0xDF8, size 0x4, align 4
    bool m_bActive; // offset 0xDFC, size 0x1, align 1
    bool m_bInteractive; // offset 0xDFD, size 0x1, align 1
    char _pad_0DFE[0x2]; // offset 0xDFE
    VectorWS m_vVacuumStartPos; // offset 0xE00, size 0xC, align 4
    Vector m_vInitialVacuumVel; // offset 0xE0C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hVacuumTarget; // offset 0xE18, size 0x4, align 4
    char _pad_0E1C[0xFC]; // offset 0xE1C
    GameTime_t m_flVacuumStartTime; // offset 0xF18, size 0x4, align 255
    VectorWS m_vVacuumPos; // offset 0xF1C, size 0xC, align 4
    float32 m_flLastFrameTime; // offset 0xF28, size 0x4, align 4
    bool m_bVacuumFinished; // offset 0xF2C, size 0x1, align 1
    char _pad_0F2D[0x3]; // offset 0xF2D
};
