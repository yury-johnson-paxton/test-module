#include<stdio.h>
/**
 * @brief Hello world test of doxygen markup
 * hello world
 * 
 *
 *    \dot
 *    digraph example {
 *        node [shape=record, fontname=Helvetica, fontsize=10];
 *        b [ label="class B" URL="\ref B"];
 *        c [ label="class C" URL="\ref C"];
 *        b -> c [ arrowhead="open", style="dashed" ];
 *    }
 *    \enddot
 * 
 *  \dot
    digraph finite_state_machine {
    rankdir=LR;
    size="8,5"

    node [shape = doublecircle]; S;
    node [shape = point ]; qi

    node [shape = circle];
    qi -> S;
    S  -> q1 [ label = "a" ];
    S  -> S  [ label = "a" ];
    q1 -> S  [ label = "a" ];
    q1 -> q2 [ label = "ddb" ];
    q2 -> q1 [ label = "b" ];
    q2 -> q2 [ label = "b" ];
    }
    \enddot
 * 
 */
void main(){
    printf("hello world");
    return;
};