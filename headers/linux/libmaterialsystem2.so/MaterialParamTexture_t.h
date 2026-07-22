#pragma once

struct MaterialParamTexture_t : public MaterialParam_t /*0x0*/  // sizeof 0x10, align 0x8 (materialsystem2) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue; // offset 0x8, size 0x8, align 8
};
