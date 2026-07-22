#pragma once

class CSurvivorsGameModeDefinition::SeparationLayerData  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    ESurvivorsEnemySeparationLayer m_eSeparationLayer; // offset 0x0, size 0x4, align 4
    float32 m_flSeperationDistance; // offset 0x4, size 0x4, align 4
};
