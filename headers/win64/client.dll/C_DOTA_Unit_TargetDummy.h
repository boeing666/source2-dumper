#pragma once

class C_DOTA_Unit_TargetDummy : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1D90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D80]; // offset 0x0
    float32 m_flDamageTaken; // offset 0x1D80, size 0x4, align 4
    float32 m_flLastHit; // offset 0x1D84, size 0x4, align 4
    GameTime_t m_flStartDamageTime; // offset 0x1D88, size 0x4, align 255
    GameTime_t m_flLastTargetDummyDamageTime; // offset 0x1D8C, size 0x4, align 255
};
