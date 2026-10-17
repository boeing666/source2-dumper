#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xD60, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xD00, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xD08, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xD10, size 0x1, align 1
    char _pad_0D11[0x3]; // offset 0xD11
    Color m_vTintColor; // offset 0xD14, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0xD18, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xD1C, size 0x4, align 4
    int32 m_nFogType; // offset 0xD20, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xD24, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xD28, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xD2C, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xD30, size 0x4, align 4
    bool m_bEnabled; // offset 0xD34, size 0x1, align 1
    char _pad_0D35[0x2B]; // offset 0xD35
};
