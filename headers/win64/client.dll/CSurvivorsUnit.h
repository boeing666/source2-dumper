#pragma once

class CSurvivorsUnit : public CSurvivorsEntity /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x28]; // offset 0x0
    SurvivorsUnitID_t m_id; // offset 0x28, size 0x4, align 255
    float32 m_flHealth; // offset 0x2C, size 0x4, align 4
    float32 m_flMaxHealth; // offset 0x30, size 0x4, align 4
    bool m_bInvulnerable; // offset 0x34, size 0x1, align 1
    char _pad_0035[0x3]; // offset 0x35
    Vector2D m_vFacing; // offset 0x38, size 0x8, align 4
    float32 m_flMovementSpeed; // offset 0x40, size 0x4, align 4
    float32 m_flMass; // offset 0x44, size 0x4, align 4
    float32 m_flKnockbackResistance; // offset 0x48, size 0x4, align 4
    float32 m_flStatusResistance; // offset 0x4C, size 0x4, align 4
    float32 m_flBodyRadius; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4C]; // offset 0x54
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playingStatusParticle; // offset 0xA0, size 0xE0, align 8
};
