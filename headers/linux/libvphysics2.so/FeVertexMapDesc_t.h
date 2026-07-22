#pragma once

struct FeVertexMapDesc_t  // sizeof 0x38, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlString sName; // offset 0x0, size 0x8, align 8
    uint32 nNameHash; // offset 0x8, size 0x4, align 4
    uint32 nColor; // offset 0xC, size 0x4, align 4
    uint32 nFlags; // offset 0x10, size 0x4, align 4
    uint16 nVertexBase; // offset 0x14, size 0x2, align 2
    uint16 nVertexCount; // offset 0x16, size 0x2, align 2
    uint32 nMapOffset; // offset 0x18, size 0x4, align 4
    uint32 nNodeListOffset; // offset 0x1C, size 0x4, align 4
    Vector vCenterOfMass; // offset 0x20, size 0xC, align 4
    float32 flVolumetricSolveStrength; // offset 0x2C, size 0x4, align 4
    int16 nScaleSourceNode; // offset 0x30, size 0x2, align 2
    uint16 nNodeListCount; // offset 0x32, size 0x2, align 2
    char _pad_0034[0x4]; // offset 0x34
};
