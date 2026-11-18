#pragma once

class CDOTA_Unit_TargetDummy : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x20B0]; // offset 0x0
    float32 m_flDamageTaken; // offset 0x20B0, size 0x4, align 4
    float32 m_flLastHit; // offset 0x20B4, size 0x4, align 4
    GameTime_t m_flStartDamageTime; // offset 0x20B8, size 0x4, align 255
    GameTime_t m_flLastTargetDummyDamageTime; // offset 0x20BC, size 0x4, align 255
};
