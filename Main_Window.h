#pragma once
#include <iostream>
#include <fstream>
#include "Objects_Classes.h"
#include "Templates.h"

using namespace sf;



void okienko() {

    RenderWindow window(VideoMode(770, 770), "Queen's Gambit");
    Texture s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13;
    int nrMovedPiece = 0;
    float px = 0, py = 0;
    int k;
    s1.loadFromFile("images/board.png");
    s2.loadFromFile("images/blackPawn.png");
    s3.loadFromFile("images/whitePawn.png");
    s4.loadFromFile("images/blackRook.png");
    s5.loadFromFile("images/whiteRook.png");
    s6.loadFromFile("images/whiteKnight.png");
    s7.loadFromFile("images/blackKnight.png");
    s8.loadFromFile("images/blackBishop.png");
    s9.loadFromFile("images/whiteBishop.png");
    s10.loadFromFile("images/whiteQueen.png");
    s11.loadFromFile("images/blackQueen.png");
    s12.loadFromFile("images/blackKing.png");
    s13.loadFromFile("images/whiteKing.png");

    Sprite b(s1);
    Sprite BlackPawn(s2);
    Sprite WhitePawn(s3);
    Sprite BlackRook(s4);
    Sprite WhiteRook(s5);
    Sprite WhiteKnight(s6);
    Sprite BlackKnight(s7);
    Sprite WhiteBishop(s8);
    Sprite BlackBishop(s9);
    Sprite WhiteQueen(s10);
    Sprite BlackQueen(s11);
    Sprite BlackKing(s12);
    Sprite WhiteKing(s13);
    Sprite Movement;


    while (window.isOpen())
    {
        Vector2i position = Mouse::getPosition(window);
        x = position.x / size;
        y = position.y / size;
        Event event;


        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
            window.clear();
            if (event.type == Event::MouseButtonPressed)
            {   //Picking up and moving pieces 
                if (event.key.code == Mouse::Left)
                {   
                    if (boardcells[y][x] != 0)
                    {
                        px = position.x - x * size;
                        py = position.y - y * size;
                        if (boardcells[y][x] == PawnB.Black_Pawn && perfMove == 1)
                        {
                            nrMovedPiece = PawnB.Black_Pawn;
                            Movement = BlackPawn;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == PawnW.White_Pawn && perfMove == 0)
                        {
                            nrMovedPiece = PawnW.White_Pawn;
                            Movement = WhitePawn;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == RookB.Black_Rook && perfMove == 1)
                        {
                            nrMovedPiece = RookB.Black_Rook;
                            Movement = BlackRook;
                            boardcells[y][x] = 0;

                        }
                        if (boardcells[y][x] == RookW.White_Rook && perfMove == 0)
                        {
                            nrMovedPiece = RookW.White_Rook;
                            Movement = WhiteRook;
                            boardcells[y][x] = 0;

                        }
                        if (boardcells[y][x] == KnightW.White_Knight && perfMove == 0)
                        {
                            nrMovedPiece = KnightW.White_Knight;
                            Movement = WhiteKnight;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == KnightB.Black_Knight && perfMove == 1)
                        {
                            nrMovedPiece = KnightB.Black_Knight;
                            Movement = BlackKnight;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == BishopB.Black_Bishop && perfMove == 1)
                        {
                            nrMovedPiece = BishopB.Black_Bishop;
                            Movement = WhiteBishop;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == BishopW.White_Bishop && perfMove == 0)
                        {
                            nrMovedPiece = BishopW.White_Bishop;
                            Movement = BlackBishop;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == QueenW.White_Queen && perfMove == 0)
                        {
                            nrMovedPiece = QueenW.White_Queen;
                            Movement = WhiteQueen;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == QueenB.Black_Queen && perfMove == 1)
                        {
                            nrMovedPiece = QueenB.Black_Queen;
                            Movement = BlackQueen;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == KingB.Black_King && perfMove == 1)
                        {
                            nrMovedPiece = KingB.Black_King;
                            Movement = BlackKing;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == KingW.White_King && perfMove == 0)
                        {
                            nrMovedPiece = KingW.White_King;
                            Movement = WhiteKing;
                            boardcells[y][x] = 0;
                        }
                        if (boardcells[y][x] == 0)
                        {
                            move = 1;
                            oldpositionx = x;
                            oldpositiony = y;
                        }
                    }
                }
            }


            if (event.type == Event::MouseButtonReleased)
            {   // placing down pieces
                if (event.key.code == Mouse::Left)
                {//checking if gamer wants to make ligal move
                    k = 2;
                    if (nrMovedPiece == PawnW.White_Pawn && move == 1)
                    {
                        k = PawnB.W_Pawn(oldpositionx, oldpositiony, x, y);
                       
                    }
                    if (nrMovedPiece == PawnB.Black_Pawn && move == 1)
                    {
                        k = PawnB.B_Pawn(oldpositionx, oldpositiony, x, y);
                       
                    }
                    if (nrMovedPiece == RookW.White_Rook && move == 1)
                    {
                        k = RookW.W_Rook(oldpositionx, oldpositiony, x, y);
                        if (k == 1 && RookW.rookWhiteLeft == 0 && oldpositiony == 7 && oldpositionx == 0)
                        {
                            RookW.rookWhiteLeft = 1;

                        }
                        if (k == 1 && RookW.rookWhiteRight == 0 && oldpositiony == 7 && oldpositionx == 7)
                        {
                            RookB.rookWhiteRight = 1;

                        }
                       

                    }
                    if (nrMovedPiece == RookB.Black_Rook && move == 1)
                    {
                        k = RookB.B_Rook(oldpositionx, oldpositiony, x, y);
                        if (k == 1 && RookB.rookBlackRight == 0 && oldpositiony == 0 && oldpositionx == 7)
                        {
                            RookB.rookBlackRight = 1;

                        }
                        if (k == 1 && RookB.rookBlackLeft == 0 && oldpositiony == 0 && oldpositionx == 0)
                        {
                            RookB.rookBlackLeft = 1;

                        }
                        

                    }
                    if (nrMovedPiece == KnightW.White_Knight && move == 1)
                    {
                        k = KnightW.W_Knight(oldpositionx, oldpositiony, x, y);
                        
                    }
                    if (nrMovedPiece == KnightB.Black_Knight && move == 1)
                    {
                        k = KnightB.B_Knight(oldpositionx, oldpositiony, x, y);
                       
                    }
                    if (nrMovedPiece == BishopW.White_Bishop && move == 1)
                    {
                        k = BishopW.W_Bishop(oldpositionx, oldpositiony, x, y);
                        
                    }
                    if (nrMovedPiece == BishopB.Black_Bishop && move == 1)
                    {
                        k = BishopB.B_Bishop(oldpositionx, oldpositiony, x, y);
                       
                    }

                    if (nrMovedPiece == QueenW.White_Queen && move == 1)
                    {
                        k = QueenW.W_Queen(oldpositionx, oldpositiony, x, y);
                       
                    }
                    if (nrMovedPiece == QueenB.Black_Queen && move == 1)
                    {
                        k = QueenB.B_Queen(oldpositionx, oldpositiony, x, y);
                        
                    }


                    if (nrMovedPiece == KingB.Black_King && move == 1)
                    {
                        k = KingB.KingBF(oldpositionx, oldpositiony, x, y);
                        if (k == 1 && KingB.kingBlack == 0)
                        {
                            KingB.kingBlack = 1;


                        }
                    }
                    if (nrMovedPiece == KingW.White_King && move == 1)
                    {
                        k = KingW.KingWF(oldpositionx, oldpositiony, x, y);
                        if (k == 1 && KingW.kingWhite == 0)
                        {
                            KingW.kingWhite = 1;

                        }
                    }

                    if (k == 1)
                    {
                        int nr = boardcells[y][x];
                        boardcells[y][x] = nrMovedPiece;
                        


                        if (perfMove == 0) //queue to move  
                        {
                            if (checkWhite == 1)
                            {
                                KingW.WKing_Position();
                                int ch = KingW.WKing_Check(KingW.kingWhitex, KingW.kingWhitey);
                                if (ch == 0)
                                {
                                    boardcells[oldpositiony][oldpositionx] = nrMovedPiece;
                                    boardcells[y][x] = nr;
                                }
                                else
                                {
                                    checkWhite = 0;
                                    KingB.BKing_Position();
                                    int check = KingB.BKing_Check(KingB.kingBlackx, KingB.kingBlacky);
                                    if (check == 0)
                                    {
                                        checkBlack = 1;
                                    }
                                    perfMove = 1;
                                    std::cout << "Black's turn  \n";
                                }
                            }
                            else
                            {
                                KingW.WKing_Position();
                                int che = KingW.WKing_Check(KingW.kingWhitex, KingW.kingWhitey);
                                if (che == 0)
                                {
                                    boardcells[oldpositiony][oldpositionx] = nrMovedPiece;
                                    boardcells[y][x] = nr;
                                }
                                else
                                {
                                    KingB.BKing_Position();
                                    int che = KingB.BKing_Check(KingB.kingBlackx, KingB.kingBlacky);
                                    if (che == 0)
                                    {
                                        checkBlack = 1;
                                    }
                                    perfMove = 1;
                                    std::cout << "Black's turn  \n";
                                }
                            }
                        }
                        else //white figures's moves
                        {
                            if (checkBlack == 1)
                            {
                                KingB.BKing_Position();
                                int s = KingB.BKing_Check(KingB.kingBlackx, KingB.kingBlacky);
                                if (s == 0)
                                {
                                    boardcells[oldpositiony][oldpositionx] = nrMovedPiece;
                                    boardcells[y][x] = nr;
                                }
                                else
                                {
                                    checkBlack = 0;
                                    KingW.WKing_Position();
                                    int check = KingW.WKing_Check(KingB.kingBlackx, KingB.kingBlacky);
                                    if (check == 0)
                                    {
                                        checkWhite = 1;
                                    }
                                    perfMove = 0;
                                    std::cout << "White's turn     \n";
                                }
                            }
                            else
                            {
                                KingB.BKing_Position();
                                int che = KingB.BKing_Check(KingB.kingBlackx, KingB.kingBlacky);
                                if (che == 0)
                                {
                                    boardcells[oldpositiony][oldpositionx] = nrMovedPiece;
                                    boardcells[y][x] = nr;
                                }
                                else
                                {
                                    KingW.WKing_Position();
                                    int sah = KingW.WKing_Check(KingW.kingWhitex, KingW.kingWhitey);
                                    if (sah == 0)
                                    {
                                        checkWhite = 1;
                                    }
                                    perfMove = 0;
                                    std::cout << "White's turn    \n";
                                }
                            }
                        }


                    }
                    else if (k == 0)
                    {
                        boardcells[oldpositiony][oldpositionx] = nrMovedPiece;
                    }
                    move = 0;
                }
            }

        }
        window.clear();

        window.draw(b);
       //moving figure
        if (move == 1)
        {
            Movement.setPosition(position.x - px, position.y - py);
            window.draw(Movement);
        }
        for (int i = 0; i < l; i++)
        {
            for (int z = 0; z < l; z++)
            {

                if (boardcells[i][z] != 0)
                {
                    //printing our figures
                    if (boardcells[i][z] == PawnB.Black_Pawn)
                    {
                        BlackPawn.setPosition(z * size, i * size);
                        window.draw(BlackPawn);
                    }
                    if (boardcells[i][z] == PawnW.White_Pawn)
                    {
                        WhitePawn.setPosition(z * size, i * size);
                        window.draw(WhitePawn);
                    }
                    if (boardcells[i][z] == RookB.Black_Rook)
                    {
                        BlackRook.setPosition(z * size, i * size);
                        window.draw(BlackRook);

                    }
                    if (boardcells[i][z] == RookW.White_Rook)
                    {
                        WhiteRook.setPosition(z * size, i * size);
                        window.draw(WhiteRook);

                    }
                    if (boardcells[i][z] == KnightW.White_Knight)
                    {
                        WhiteKnight.setPosition(z * size, i * size);
                        window.draw(WhiteKnight);
                    }
                    if (boardcells[i][z] == KnightB.Black_Knight)
                    {
                        BlackKnight.setPosition(z * size, i * size);
                        window.draw(BlackKnight);
                    }
                    if (boardcells[i][z] == BishopB.Black_Bishop)
                    {
                        WhiteBishop.setPosition(z * size, i * size);
                        window.draw(WhiteBishop);
                    }
                    if (boardcells[i][z] == BishopW.White_Bishop)
                    {
                        BlackBishop.setPosition(z * size, i * size);
                        window.draw(BlackBishop);
                    }
                    if (boardcells[i][z] == QueenW.White_Queen)
                    {
                        WhiteQueen.setPosition(z * size, i * size);
                        window.draw(WhiteQueen);
                    }
                    if (boardcells[i][z] == QueenB.Black_Queen)
                    {
                        BlackQueen.setPosition(z * size, i * size);
                        window.draw(BlackQueen);
                    }
                    if (boardcells[i][z] == KingB.Black_King)
                    {
                        BlackKing.setPosition(z * size, i * size);
                        window.draw(BlackKing);
                    }
                    if (boardcells[i][z] == KingW.White_King)
                    {
                        WhiteKing.setPosition(z * size, i * size);
                        window.draw(WhiteKing);
                    }

                }
            }
        }
        window.display();
    }
}
       



    

   