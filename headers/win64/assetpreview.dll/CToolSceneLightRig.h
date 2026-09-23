#pragma once

class CToolSceneLightRig  // sizeof 0x170, align 0x8 (toolscene) {MGetKV3ClassDefaults MVDataRoot MVDataAssociatedFile}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    LightRigType_t m_nRigType; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CLightRigSunLight > m_Suns; // offset 0x10, size 0x18, align 8
    CUtlVector< CLightRigPointLight > m_PointLights; // offset 0x28, size 0x18, align 8
    CUtlVector< CLightRigSpotLight > m_SpotLights; // offset 0x40, size 0x18, align 8
    CLightRigBackground m_Background; // offset 0x58, size 0x8, align 4
    CLightRigGrid m_Grid; // offset 0x60, size 0x8, align 4
    CLightRigExposure m_Exposure; // offset 0x68, size 0xC, align 4
    char _pad_0074[0x4]; // offset 0x74
    CLightRigPostProcessing m_PostProcessing; // offset 0x78, size 0x8, align 8
    CLightRigSky m_Sky; // offset 0x80, size 0x8, align 8
    CLightRigVMap m_BackgroundMap; // offset 0x88, size 0xE8, align 8
};
