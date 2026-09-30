#pragma once

struct CitadelGafferSettingsVData_t  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
    float32 m_flSkyboxBrightnessScale; // offset 0x0, size 0x4, align 4
    Color m_SkyboxColorTint; // offset 0x4, size 0x4, align 4
    float32 m_flCubemapFogBrightnessScale; // offset 0x8, size 0x4, align 4
    Color m_CubemapFogColorTint; // offset 0xC, size 0x4, align 4
    float32 m_flSunLightBrightnessScale; // offset 0x10, size 0x4, align 4
    Color m_SunlightColorTint; // offset 0x14, size 0x4, align 4
};
