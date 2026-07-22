#pragma once

enum PointTemplateClientOnlyEntityBehavior_t : uint32_t  // sizeof 0x4
{
    CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0,
    CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1,
};
