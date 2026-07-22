#pragma once

class CTormentorSpawnPhase  // sizeof 0x40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    ETormentorLocation m_eTormentorLocation; // offset 0x30, size 0x4, align 4
    ETormentorSpawnPhase m_eTormentorSpawnPhase; // offset 0x34, size 0x4, align 4
    float32 m_flTormentorPhaseStartTime; // offset 0x38, size 0x4, align 4
    float32 m_flTormentorPhaseEndTime; // offset 0x3C, size 0x4, align 4
};
