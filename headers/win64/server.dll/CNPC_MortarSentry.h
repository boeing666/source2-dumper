#pragma once

class CNPC_MortarSentry : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1810, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x17BC]; // offset 0x0
    float32 m_flAttackCone; // offset 0x17BC, size 0x4, align 4
    float32 m_flLastAlertSound; // offset 0x17C0, size 0x4, align 4 | MNotSaved
    float32 m_flTrackingSpeed; // offset 0x17C4, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x17C8, size 0xC, align 4
    float32 m_flSearchRadius; // offset 0x17D4, size 0x4, align 4
    float32 m_flLifeTime; // offset 0x17D8, size 0x4, align 4
    char _pad_17DC[0x34]; // offset 0x17DC
};
