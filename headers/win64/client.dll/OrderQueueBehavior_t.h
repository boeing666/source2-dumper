#pragma once

enum OrderQueueBehavior_t : uint32_t  // sizeof 0x4
{
    DOTA_ORDER_QUEUE_DEFAULT = 0,
    DOTA_ORDER_QUEUE_NEVER = 1,
    DOTA_ORDER_QUEUE_ALWAYS = 2,
};
