#pragma once

class CDOTA_CreepKillInfo  // sizeof 0x20, align 0xFF [trivial_dtor] (server)
{
public:
    GameTime_t m_flTimeOfDeath; // offset 0x0, size 0x4, align 255
    float32 m_flDeathFlightDuration; // offset 0x4, size 0x4, align 4
    Vector m_vWsKillDirection; // offset 0x8, size 0xC, align 4
    VectorWS m_vWsKillOrigin; // offset 0x14, size 0xC, align 4
};
