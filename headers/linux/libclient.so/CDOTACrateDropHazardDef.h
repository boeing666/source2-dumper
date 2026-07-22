#pragma once

class CDOTACrateDropHazardDef : public CDOTACrateDropDroppableDef /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xE0]; // offset 0x0
    float32 m_flExplosionRadius; // offset 0xE0, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xE4, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xE8, size 0x4, align 4
    EDOTACrateDropHazardType m_eHazardType; // offset 0xEC, size 0x4, align 4
};
