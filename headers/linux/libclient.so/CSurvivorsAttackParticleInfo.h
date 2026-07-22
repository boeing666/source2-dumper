#pragma once

class CSurvivorsAttackParticleInfo  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
public:
    SurvivorsParticleID_t unParticleID; // offset 0x0, size 0x4, align 255
    float32 flTimeLeft; // offset 0x4, size 0x4, align 4
};
