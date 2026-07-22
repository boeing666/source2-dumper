#pragma once

class CLightInfoBase  // sizeof 0x12C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    Vector2D m_origin2D; // offset 0x10, size 0x8, align 4
    Color[2] m_Color; // offset 0x18, size 0x8, align 1
    float32[2] m_LightScale; // offset 0x20, size 0x8, align 4
    Color[2] m_AmbientColor; // offset 0x28, size 0x8, align 1
    float32[2] m_AmbientScale; // offset 0x30, size 0x8, align 4
    Color[2] m_ShadowColor; // offset 0x38, size 0x8, align 1
    Color[2] m_ShadowSecondaryColor; // offset 0x40, size 0x8, align 1
    float32[2] m_ShadowScale; // offset 0x48, size 0x8, align 4
    float32[2] m_ShadowGroundScale; // offset 0x50, size 0x8, align 4
    Color[2] m_SpecularColor; // offset 0x58, size 0x8, align 1
    float32[2] m_flSpecularPower; // offset 0x60, size 0x8, align 4
    float32[2] m_flSpecularIndependence; // offset 0x68, size 0x8, align 4
    Vector[2] m_SpecularDirection; // offset 0x70, size 0x18, align 4
    Vector[2] m_InspectorSpecularDirection; // offset 0x88, size 0x18, align 4
    Vector[2] m_LightDirection; // offset 0xA0, size 0x18, align 4
    Vector[2] m_AmbientDirection; // offset 0xB8, size 0x18, align 4
    Color[2] m_FogColor; // offset 0xD0, size 0x8, align 1
    float32[2] m_FogStart; // offset 0xD8, size 0x8, align 4
    float32[2] m_FogEnd; // offset 0xE0, size 0x8, align 4
    float32[2] m_HeightFogValue; // offset 0xE8, size 0x8, align 4
    Color[2] m_HeightFogColor; // offset 0xF0, size 0x8, align 1
    float32[2] m_FoWDarkness; // offset 0xF8, size 0x8, align 4
    float32[2] m_FoWColorR; // offset 0x100, size 0x8, align 4
    float32[2] m_FoWColorG; // offset 0x108, size 0x8, align 4
    float32[2] m_FoWColorB; // offset 0x110, size 0x8, align 4
    Color[2] m_InspectorViewFogColor; // offset 0x118, size 0x8, align 1
    QAngle m_windAngle; // offset 0x120, size 0xC, align 4
    float32[2] m_flWindAmount; // offset 0x12C, size 0x8, align 4
    float32 m_flMinWind; // offset 0x134, size 0x4, align 4
    float32 m_flMaxWind; // offset 0x138, size 0x4, align 4
    float32 m_flMinGust; // offset 0x13C, size 0x4, align 4
    float32 m_flMaxGust; // offset 0x140, size 0x4, align 4
    float32 m_flMinGustDelay; // offset 0x144, size 0x4, align 4
    float32 m_flMaxGustDelay; // offset 0x148, size 0x4, align 4
    float32 m_flGustDuration; // offset 0x14C, size 0x4, align 4
    float32 m_flGustDirChange; // offset 0x150, size 0x4, align 4
    QAngle[2] m_skyboxAngle; // offset 0x154, size 0x18, align 4
    char _pad_016C[0x4]; // offset 0x16C
    CStrongHandle< InfoForResourceTypeIMaterial2 >[2] m_hSkyboxMaterial; // offset 0x170, size 0x10, align 8
    Color[2] m_vSkyboxTintColor; // offset 0x180, size 0x8, align 1
    uint8 m_nSkyboxFogType; // offset 0x188, size 0x1, align 1
    char _pad_0189[0x3]; // offset 0x189
    float32 m_flSkyboxAngularFogMaxEnd; // offset 0x18C, size 0x4, align 4
    float32 m_flSkyboxAngularFogMaxStart; // offset 0x190, size 0x4, align 4
    float32 m_flSkyboxAngularFogMinStart; // offset 0x194, size 0x4, align 4
    float32 m_flSkyboxAngularFogMinEnd; // offset 0x198, size 0x4, align 4
    Vector4D m_vAngularParams; // offset 0x19C, size 0x10, align 4
    Color[2] m_vHeightFogColor; // offset 0x1AC, size 0x8, align 1
    float32 m_flFogMaxZ; // offset 0x1B4, size 0x4, align 4
    float32[2] m_flFogDensity; // offset 0x1B8, size 0x8, align 4
    float32 m_flFogFalloff; // offset 0x1C0, size 0x4, align 4
    char _pad_01C4[0x4]; // offset 0x1C4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture0; // offset 0x1C8, size 0x8, align 8
    float32 m_flFogLayer0Rotation; // offset 0x1D0, size 0x4, align 4
    float32 m_flFogLayer0Scale; // offset 0x1D4, size 0x4, align 4
    float32[2] m_flFoglayer0ScrollU; // offset 0x1D8, size 0x8, align 4
    float32[2] m_flFoglayer0ScrollV; // offset 0x1E0, size 0x8, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTexture1; // offset 0x1E8, size 0x8, align 8
    float32 m_flFogLayer1Rotation; // offset 0x1F0, size 0x4, align 4
    float32 m_flFogLayer1Scale; // offset 0x1F4, size 0x4, align 4
    float32[2] m_flFoglayer1ScrollU; // offset 0x1F8, size 0x8, align 4
    float32[2] m_flFoglayer1ScrollV; // offset 0x200, size 0x8, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogTextureOpacity; // offset 0x208, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hWaterFlowMapTexture; // offset 0x210, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogFlowMapTexture; // offset 0x218, size 0x8, align 8
    float32 m_flFogExclusionInnerRadius; // offset 0x220, size 0x4, align 4
    float32 m_flFogExclusionHeightBias; // offset 0x224, size 0x4, align 4
    char _pad_0228[0x4]; // offset 0x228
    float32 m_flCausticSpeedScale; // offset 0x22C, size 0x4, align 4
    float32 m_flCausticAmplitudeScale; // offset 0x230, size 0x4, align 4
    char _pad_0234[0x4]; // offset 0x234
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hColorWarp; // offset 0x238, size 0x8, align 8
    float32 m_flColorWarpBlendToFull; // offset 0x240, size 0x4, align 4
    float32 m_fInnerRadius; // offset 0x244, size 0x4, align 4
    float32 m_fOuterRadius; // offset 0x248, size 0x4, align 4
    float32 m_flLightning_specular_pow_scale_min; // offset 0x24C, size 0x4, align 4
    float32 m_flLightning_specular_pow_scale_max; // offset 0x250, size 0x4, align 4
    Color m_lightningColor; // offset 0x254, size 0x4, align 1
    float32 m_flLightningIntensityMin; // offset 0x258, size 0x4, align 4
    float32 m_flLightningIntensityMax; // offset 0x25C, size 0x4, align 4
    float32 m_flLightningElevation; // offset 0x260, size 0x4, align 4
    float32 m_flLightningSpecularIntensity; // offset 0x264, size 0x4, align 4
    float32 m_flFarZOverride; // offset 0x268, size 0x4, align 4
    float32 m_flAmbientShadowAmount; // offset 0x26C, size 0x4, align 4
    int32 m_nWeatherType; // offset 0x270, size 0x4, align 4
    char _pad_0274[0x4]; // offset 0x274
    CUtlString m_WeatherEffect; // offset 0x278, size 0x8, align 8
    float32 m_flLightning_period_min; // offset 0x280, size 0x4, align 4
    float32 m_flLightning_period_max; // offset 0x284, size 0x4, align 4
    float32 m_flLightning_duration_min; // offset 0x288, size 0x4, align 4
    float32 m_flLightning_duration_max; // offset 0x28C, size 0x4, align 4
    float32 m_flLightning_fluctuation_min; // offset 0x290, size 0x4, align 4
    float32 m_flLightning_fluctuation_max; // offset 0x294, size 0x4, align 4
    char[4096] m_pszLightningSound; // offset 0x298, size 0x1000, align 1
    float32 m_flNextLightningStartTime; // offset 0x1298, size 0x4, align 4
    float32 m_flNextLightningEndTime; // offset 0x129C, size 0x4, align 4
    float32 m_flLightningFluctuationTimeStart; // offset 0x12A0, size 0x4, align 4
    float32 m_flLightningFluctuationTimeEnd; // offset 0x12A4, size 0x4, align 4
    float32 m_flLightningNumFluctuations; // offset 0x12A8, size 0x4, align 4
    float32 m_flNextLightningSoundTime; // offset 0x12AC, size 0x4, align 4
    bool m_bPlayLightingSound; // offset 0x12B0, size 0x1, align 1
    char _pad_12B1[0x3]; // offset 0x12B1
    float32 m_flLightningEventMagnitude; // offset 0x12B4, size 0x4, align 4
    float32 m_flLightningScale; // offset 0x12B8, size 0x4, align 4
    float32 m_flLightningFluctuation; // offset 0x12BC, size 0x4, align 4
    float32 m_flLightningAngle; // offset 0x12C0, size 0x4, align 4
    float32 m_flLightningEventPercentage; // offset 0x12C4, size 0x4, align 4
};
