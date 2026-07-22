#pragma once

struct MaterialResourceData_t  // sizeof 0x130, align 0x8 (materialsystem2) {MGetKV3ClassDefaults}
{
    CUtlString m_materialName; // offset 0x0, size 0x8, align 8
    CUtlString m_shaderName; // offset 0x8, size 0x8, align 8
    CUtlVector< MaterialParamInt_t > m_intParams; // offset 0x10, size 0x18, align 8
    CUtlVector< MaterialParamFloat_t > m_floatParams; // offset 0x28, size 0x18, align 8
    CUtlVector< MaterialParamVector_t > m_vectorParams; // offset 0x40, size 0x18, align 8
    CUtlVector< MaterialParamTexture_t > m_textureParams; // offset 0x58, size 0x18, align 8
    CUtlVector< MaterialParamBuffer_t > m_dynamicParams; // offset 0x70, size 0x18, align 8
    CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams; // offset 0x88, size 0x18, align 8
    CUtlVector< MaterialParamInt_t > m_intAttributes; // offset 0xA0, size 0x18, align 8
    CUtlVector< MaterialParamFloat_t > m_floatAttributes; // offset 0xB8, size 0x18, align 8
    CUtlVector< MaterialParamVector_t > m_vectorAttributes; // offset 0xD0, size 0x18, align 8
    CUtlVector< MaterialParamTexture_t > m_textureAttributes; // offset 0xE8, size 0x18, align 8
    CUtlVector< MaterialParamString_t > m_stringAttributes; // offset 0x100, size 0x18, align 8
    CUtlVector< CUtlString > m_renderAttributesUsed; // offset 0x118, size 0x18, align 8
};
