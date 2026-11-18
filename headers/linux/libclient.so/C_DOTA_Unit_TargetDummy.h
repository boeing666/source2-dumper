#pragma once

class C_DOTA_Unit_TargetDummy : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x209C]; // offset 0x0
    float32 m_flDamageTaken; // offset 0x209C, size 0x4, align 4
    float32 m_flLastHit; // offset 0x20A0, size 0x4, align 4
    GameTime_t m_flStartDamageTime; // offset 0x20A4, size 0x4, align 255
    GameTime_t m_flLastTargetDummyDamageTime; // offset 0x20A8, size 0x4, align 255
    char _pad_20AC[0x4]; // offset 0x20AC
};
