#pragma once

class C_DOTA_BaseNPC_RotatableBuilding : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1B40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B34]; // offset 0x0
    HSequence m_hObsoleteHeroStatueSequence; // offset 0x1B34, size 0x4, align 255
    HSequence m_hObsoleteConstantLayerSequence; // offset 0x1B38, size 0x4, align 255
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
