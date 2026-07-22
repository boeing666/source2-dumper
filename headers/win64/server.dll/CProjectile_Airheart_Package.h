#pragma once

class CProjectile_Airheart_Package : public CBaseAnimGraph /*0x0*/  // sizeof 0xAC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    Vector m_vVelocity; // offset 0xA90, size 0xC, align 4
    float32 m_flFloorDist; // offset 0xA9C, size 0x4, align 4
    bool m_bPunchedOnce; // offset 0xAA0, size 0x1, align 1
    bool m_bOnGround; // offset 0xAA1, size 0x1, align 1
    char _pad_0AA2[0x6]; // offset 0xAA2
    CCitadelBaseAbility* m_pAbility; // offset 0xAA8, size 0x8, align 8
    float32 m_flStunDuration; // offset 0xAB0, size 0x4, align 4
    float32 m_flStunRadius; // offset 0xAB4, size 0x4, align 4
    char _pad_0AB8[0x8]; // offset 0xAB8
};
