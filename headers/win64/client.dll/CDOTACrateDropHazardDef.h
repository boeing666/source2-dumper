#pragma once

class CDOTACrateDropHazardDef : public CDOTACrateDropDroppableDef /*0x0*/  // sizeof 0xF8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xE8]; // offset 0x0
    float32 m_flExplosionRadius; // offset 0xE8, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xEC, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xF0, size 0x4, align 4
    EDOTACrateDropHazardType m_eHazardType; // offset 0xF4, size 0x4, align 4
};
