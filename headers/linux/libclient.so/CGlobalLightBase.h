#pragma once

class CGlobalLightBase  // sizeof 0x4C0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    bool m_bSpotLight; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    VectorWS m_SpotLightOrigin; // offset 0x14, size 0xC, align 4
    QAngle m_SpotLightAngles; // offset 0x20, size 0xC, align 4
    Vector m_ShadowDirection; // offset 0x2C, size 0xC, align 4
    Vector m_AmbientDirection; // offset 0x38, size 0xC, align 4
    Vector m_SpecularDirection; // offset 0x44, size 0xC, align 4
    Vector m_InspectorSpecularDirection; // offset 0x50, size 0xC, align 4
    float32 m_flSpecularPower; // offset 0x5C, size 0x4, align 4
    float32 m_flSpecularIndependence; // offset 0x60, size 0x4, align 4
    Color m_SpecularColor; // offset 0x64, size 0x4, align 1
    bool m_bStartDisabled; // offset 0x68, size 0x1, align 1
    bool m_bEnabled; // offset 0x69, size 0x1, align 1
    Color m_LightColor; // offset 0x6A, size 0x4, align 1
    Color m_AmbientColor1; // offset 0x6E, size 0x4, align 1
    Color m_AmbientColor2; // offset 0x72, size 0x4, align 1
    Color m_AmbientColor3; // offset 0x76, size 0x4, align 1
    char _pad_007A[0x2]; // offset 0x7A
    float32 m_flSunDistance; // offset 0x7C, size 0x4, align 4
    float32 m_flFOV; // offset 0x80, size 0x4, align 4
    float32 m_flNearZ; // offset 0x84, size 0x4, align 4
    float32 m_flFarZ; // offset 0x88, size 0x4, align 4
    bool m_bEnableShadows; // offset 0x8C, size 0x1, align 1
    bool m_bOldEnableShadows; // offset 0x8D, size 0x1, align 1
    bool m_bBackgroundClearNotRequired; // offset 0x8E, size 0x1, align 1
    char _pad_008F[0x1]; // offset 0x8F
    float32 m_flCloudScale; // offset 0x90, size 0x4, align 4
    float32 m_flCloud1Speed; // offset 0x94, size 0x4, align 4
    float32 m_flCloud1Direction; // offset 0x98, size 0x4, align 4
    float32 m_flCloud2Speed; // offset 0x9C, size 0x4, align 4
    float32 m_flCloud2Direction; // offset 0xA0, size 0x4, align 4
    char _pad_00A4[0xC]; // offset 0xA4
    float32 m_flAmbientScale1; // offset 0xB0, size 0x4, align 4
    float32 m_flAmbientScale2; // offset 0xB4, size 0x4, align 4
    float32 m_flGroundScale; // offset 0xB8, size 0x4, align 4
    float32 m_flLightScale; // offset 0xBC, size 0x4, align 4
    float32 m_flFoWDarkness; // offset 0xC0, size 0x4, align 4
    bool m_bEnableSeparateSkyboxFog; // offset 0xC4, size 0x1, align 1
    char _pad_00C5[0x3]; // offset 0xC5
    Vector m_vFowColor; // offset 0xC8, size 0xC, align 4
    VectorWS m_ViewOrigin; // offset 0xD4, size 0xC, align 4
    QAngle m_ViewAngles; // offset 0xE0, size 0xC, align 4
    float32 m_flViewFoV; // offset 0xEC, size 0x4, align 4
    VectorWS[8] m_WorldPoints; // offset 0xF0, size 0x60, align 4
    char _pad_0150[0x358]; // offset 0x150
    Vector2D m_vFogOffsetLayer0; // offset 0x4A8, size 0x8, align 4
    Vector2D m_vFogOffsetLayer1; // offset 0x4B0, size 0x8, align 4
    CHandle< C_BaseEntity > m_hEnvWind; // offset 0x4B8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEnvSky; // offset 0x4BC, size 0x4, align 4
};
